import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-gradient',
  templateUrl: './gradient.component.html',
  styleUrls: ['./gradient.component.css']
})
export class GradientComponent implements OnInit {

color1='rgba(204, 152, 152, 0.082)';
color2='rgba(175, 132, 132, 0.086)';

title='';
body='';
direction="to right";
icon='';

fun1(url ){
  console.log("tets");
  this.icon=url;
}


  constructor() { }

  ngOnInit() {
  }

}
