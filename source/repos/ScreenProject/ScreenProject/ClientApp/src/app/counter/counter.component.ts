import { Component, Inject } from '@angular/core';
import { HttpClient } from '@angular/common/http';


@Component({
  selector: 'app-counter-component',
  templateUrl: './counter.component.html',
   styleUrls: ['./CounterComponent.css']
})
export class CounterComponent {

  public events: any[];

  constructor(http: HttpClient, @Inject('BASE_URL') baseUrl: string) {
    http.get<any[]>(baseUrl + 'api/Event/GetCurrentEvent').subscribe(result => {
      this.events = result;
    }, error => console.error(error));
  }



}

//interface WeatherForecast {
//  dateFormatted: string;
//  temperatureC: number;
//  temperatureF: number;
//  summary: string;

//  Id: number;

//  TemplateId: number;
//  StartDate: string;
//  EndDate: string;
//  Date: string;
//  Repeat: string;
//  Priority: number;
//  MyTemplate:Template;
//  EventFields:EventField[];
//  TemplateFields:TemplateField[];
//        // ICollection < EventField > EventFields: 




//}




