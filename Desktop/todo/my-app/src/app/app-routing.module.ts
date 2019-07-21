import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';
import {GradientComponent} from './gradient/gradient.component';


const routes: Routes = [
  {
    path: 'gradient',
    component: GradientComponent
  }
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
