//¿Cuál es la salida del siguiente código? 
int m[2][2] = {{2,3},{4,5}}; 
int (*p)[2] = m; 
int s=0; 
for(int i=0;i<2;i++) 
for(int j=0;j<2;j++) s += p[i][j]; 
cout << s; 
//A) 20     B) 12     C) 10     D) 14   Respuesta: D