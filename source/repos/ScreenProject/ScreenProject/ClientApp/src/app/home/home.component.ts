import { Component, Inject } from '@angular/core';
import { HttpClient } from '@angular/common/http';
//import { CdkDragDrop, moveItemInArray, transferArrayItem } from '@angular/cdk/drag-drop'

@Component({
  selector: 'app-home',
  templateUrl: './home.component.html',
})




export class HomeComponent {


  public events: any[];
  public evn: any;

  public interval = 10000;  public i = 0 ;  public len =0;  constructor(http: HttpClient, @Inject('BASE_URL') baseUrl: string) {       this.GetEventt(http, baseUrl);    this.Reload(http, baseUrl);      }  GetEventt(http: HttpClient, @Inject('BASE_URL') baseUrl: string) {    http.get<any[]>(baseUrl + 'api/Event/GetCurrentEvent').subscribe(result => {      this.events = result;      this.Swap2();    this.len= this.events.length;    }, error => console.error(error)    );  }  Reload(http: HttpClient, @Inject('BASE_URL') baseUrl: string): void {    setInterval(() => {      this.GetEventt(http, baseUrl);    }, this.interval);  }  Swap2(): void {    setInterval(() => {      this.i = (this.i+1) % this.events.length;      this.evn = this.events[this.i];        console.log(this.evn);
    }, 5000);  }  swap() {    for (this.i = 0; this.i < this.len; ++this.i)    {      this.evn = this.events[this.i];      console.log(this.evn);      setInterval(this.evn, 2000);    }  
    this.i = 0;

}}




























  







