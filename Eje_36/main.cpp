//¿Cuál es la salida del siguiente código? 
int n = 3; 
int* a = new int[n]{2,4,6}; 
int s=0; 
for(int i=0;i<n;i++) s+=a[i]; 
cout << s; 
delete[] a; 
//A) 24     B) 6     C) 8     D) 12   Respuesta: D