/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
//ebay shit
const short temptable_14[][2] PROGMEM = {
   {(short)(11.44*OVERSAMPLENR), 350}, // v=0.0558576981537 r=53.0994387488 res=7.35588706882 C/count
   {(short)(12.83*OVERSAMPLENR), 340}, // v=0.062627494151 r=59.6165718023 res=6.39772814648 C/count
   {(short)(14.43*OVERSAMPLENR), 330}, // v=0.0704721981759 r=67.190884146 res=5.54003604604 C/count
   {(short)(16.30*OVERSAMPLENR), 320}, // v=0.0795988622321 r=76.0333643571 res=4.77582180138 C/count
   {(short)(18.49*OVERSAMPLENR), 310}, // v=0.0902607828532 r=86.404931229 res=4.09815143634 C/count
   {(short)(21.05*OVERSAMPLENR), 300}, // v=0.10276903864 r=98.6301208619 res=3.50019777429 C/count
   {(short)(24.07*OVERSAMPLENR), 290}, // v=0.117507111844 r=113.115049693 res=2.97528876366 C/count
   {(short)(27.64*OVERSAMPLENR), 280}, // v=0.134949420461 r=130.371157667 res=2.51695164967 C/count
   {(short)(31.88*OVERSAMPLENR), 270}, // v=0.155684774386 r=151.046826133 res=2.11895245251 C/count
   {(short)(36.96*OVERSAMPLENR), 260}, // v=0.180445961358 r=175.969812057 res=1.7753303512 C/count
   {(short)(43.04*OVERSAMPLENR), 250}, // v=0.210146825019 r=206.204666721 res=1.48042671526 C/count
   {(short)(50.37*OVERSAMPLENR), 240}, // v=0.245928233973 r=243.131100362 res=1.2289086691 C/count
   {(short)(59.23*OVERSAMPLENR), 230}, // v=0.28921409329 r=288.551903097 res=1.01578721408 C/count
   {(short)(70.00*OVERSAMPLENR), 220}, // v=0.341777719877 r=344.842986621 res=0.836430068452 C/count
   {(short)(83.11*OVERSAMPLENR), 210}, // v=0.405816972703 r=415.164080397 res=0.686569516979 C/count
   {(short)(99.13*OVERSAMPLENR), 200}, // v=0.484032654062 r=503.757733354 res=0.562305691802 C/count
   {(short)(118.72*OVERSAMPLENR), 190}, // v=0.579697613555 r=616.37837087 res=0.460105841757 C/count
   {(short)(142.68*OVERSAMPLENR), 180}, // v=0.696692047132 r=760.915244129 res=0.376800299062 C/count
   {(short)(171.92*OVERSAMPLENR), 170}, // v=0.839462151523 r=948.308188953 res=0.309576039934 C/count
   {(short)(207.43*OVERSAMPLENR), 160}, // v=1.01283469498 r=1193.91163953 res=0.255968990704 C/count
   {(short)(250.18*OVERSAMPLENR), 150}, // v=1.22159453328 r=1519.55483788 res=0.213856605873 C/count
   {(short)(301.00*OVERSAMPLENR), 140}, // v=1.46972223474 r=1956.7 res=0.181452827867 C/count
   {(short)(360.29*OVERSAMPLENR), 130}, // v=1.75922880851 r=2551.36043597 res=0.157308482297 C/count
   {(short)(427.76*OVERSAMPLENR), 120}, // v=2.08866165066 r=3371.88900093 res=0.140321734563 C/count
   {(short)(502.09*OVERSAMPLENR), 110}, // v=2.45161730994 r=4521.53493336 res=0.129765913976 C/count
   {(short)(580.79*OVERSAMPLENR), 100}, // v=2.83591238827 r=6159.07976766 res=0.125346683653 C/count
   {(short)(660.32*OVERSAMPLENR), 90}, // v=3.2241974082 r=8533.4529235 res=0.127308865499 C/count
   {(short)(736.55*OVERSAMPLENR), 80}, // v=3.59643583633 r=12043.0892069 res=0.136628455338 C/count
   {(short)(805.63*OVERSAMPLENR), 70}, // v=3.93376405525 r=17340.1498521 res=0.155353963796 C/count
   {(short)(864.73*OVERSAMPLENR), 60}, // v=4.22232405757 r=25518.2422239 res=0.187216650469 C/count
   {(short)(912.49*OVERSAMPLENR), 50}, // v=4.45551408976 r=38459.9781704 res=0.238740653602 C/count
   {(short)(949.03*OVERSAMPLENR), 40}, // v=4.63395613267 r=59499.9555171 res=0.321318111737 C/count
   {(short)(975.60*OVERSAMPLENR), 30}, // v=4.7636553364 r=94731.058192 res=0.455233950389 C/count
   {(short)(993.99*OVERSAMPLENR), 20}, // v=4.85346452507 r=155670.722592 res=0.677864106 C/count
   {(short)(1006.15*OVERSAMPLENR), 10}, // v=4.91283924961 r=264916.770106 res=1.06153115841 C/count
   {(short)(1013.83*OVERSAMPLENR), 0}  // v=4.95035514747 r=468662.268282 res=1.75637647864 C/count
  
};

