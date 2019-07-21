import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-gradient',
  templateUrl: './gradient.component.html',
  styleUrls: ['./gradient.component.css']
})
export class GradientComponent implements OnInit {

color1='red';
color2='blue';
title='';
body='';
direction="to right";
icon='';

fun1(url ){
  console.log("tets");
  this.icon=url;
}


fun2(event ){
  this.icon="https://image.flaticon.com/icons/svg/272/272340.svg";
}


fun3(event ){
  this.icon="https://image.flaticon.com/icons/svg/272/272340.svg";
}


  constructor() { }

  ngOnInit() {
  }

}
