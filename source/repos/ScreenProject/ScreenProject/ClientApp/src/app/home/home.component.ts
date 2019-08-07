import { Component, Inject } from '@angular/core';
import { HttpClient } from '@angular/common/http';

@Component({
  selector: 'app-home',
  templateUrl: './home.component.html',
})




export class HomeComponent {


  public events: any[];

  public interval = 5000;  constructor(http: HttpClient, @Inject('BASE_URL') baseUrl: string) {    this.GetEventt(http, baseUrl);    this.Reload(http, baseUrl);  }  GetEventt(http: HttpClient, @Inject('BASE_URL') baseUrl: string) {    http.get<any[]>(baseUrl + 'api/Event/GetCurrentEvent').subscribe(result => {      this.events = result;    }, error => console.error(error)    );  }  Reload(http: HttpClient, @Inject('BASE_URL') baseUrl: string): void {    setInterval(() => {      this.GetEventt(http, baseUrl);    }, this.interval);  }}























  ////setInterval(constructor, 1000);

  //constructor(http: HttpClient, @Inject('BASE_URL') baseUrl: string) {
  //  http.get<any[]>(baseUrl + 'api/Event/GetCurrentEvent').subscribe(result => {
  //    this.events = result;
  //  }, error => console.error(error));
  //}





  







