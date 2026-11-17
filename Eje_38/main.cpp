//¿Cuál es la salida del siguiente código? 
int (*m)[3] = new int[2][3]{{2,4,6},{1,3,5}}; 
cout << *(*(m+1)+2); 
delete[] m; 
//A) 1     B) 5     C) 3     D) 6   Respuesta: B