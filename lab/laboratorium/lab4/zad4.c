/*
Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu geomytrecznego
*/
float Geom(float k, float n, float o);
  
  void main(void){

   printf("Geomytrecznego = %.f\n",Geom(8,2,14));
  }
  float Geom(float k, float n, float o){
   if(n > 1){
    float q = o/k;
    return Geom(o, o * q, n-1);
   }else
   {
return k;
   }
   return;
  }
