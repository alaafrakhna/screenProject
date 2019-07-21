import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import { FormsModule } from '@angular/forms';
import { ColorPickerModule } from 'ngx-color-picker';
import {MatButtonModule, MatCheckboxModule} from '@angular/material';


import {BrowserAnimationsModule} from '@angular/platform-browser/animations';
import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { NavbarComponent } from './navbar/navbar.component';
import { GradientComponent } from './gradient/gradient.component';

@NgModule({
  declarations: [
    AppComponent,
    NavbarComponent,
    GradientComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
   BrowserAnimationsModule,
    FormsModule,
    MatButtonModule, MatCheckboxModule,
    ColorPickerModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
