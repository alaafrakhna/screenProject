import { Component, Inject } from '@angular/core';
import { HttpClient } from '@angular/common/http';



@Component({
  selector: 'app-home',
  templateUrl: './home.component.html'
})

export class HomeComponent {

  public events: any[];
 public evn: any;
  public Data: any;
  //public IntervalToCheckDB = 3600000‬;
  public i = 0;
  public len = 0;
  public IntervalForSwap: number;
  public selectedbackground: string;
  
  constructor(http: HttpClient, @Inject('BASE_URL') baseUrl: string) {

    
    this.GetEventt(http, baseUrl);
    this.GetEventtt(http, baseUrl);
    this.Reload(http, baseUrl);
 
  }

  GetEventt(http: HttpClient, @Inject('BASE_URL') baseUrl: string): void  {
    http.get<any[]>(baseUrl + 'api/Event/GetCurrentEvent').subscribe(result => {
      this.events = result;
      console.log(this.events);

      this.len = this.events.length;
      console.log(this.Data.background);
      console.log(this.events);
      console.log(this.events.length);
      console.log("111111111111");

      if (this.events.length == 0) {
    


        this.selectedbackground = this.Data.background;
      } else{
        this.evn = this.events[0];

        this.selectedbackground = this.evn.myTemplate.backGroundImg;

        console.log(this.selectedbackground);
        this.Swap2();
      }

      
    }, error => console.error(error)
    );

  }


  Reload(http: HttpClient, @Inject('BASE_URL') baseUrl: string): void {
    setInterval(() => {
      this.GetEventt(http, baseUrl);
    }, 10000);

  }

  Swap2(): void {
    setInterval(() => {
      this.i = (this.i+1) % this.events.length;

      this.evn = this.events[this.i];
        //console.log(this.evn);

    }, this.IntervalForSwap);

  }



  GetEventtt(http: HttpClient, @Inject('BASE_URL') baseUrl: string) {
    http.get<any[]>(baseUrl + 'api/Event/GetData').subscribe(result => {
      this.Data = result;
      
      this.IntervalForSwap = this.Data.intervalToSwap;
      console.log(this.IntervalForSwap);
    }, error => console.error(error)
    );

  }



}
