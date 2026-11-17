//¿Cuál es la salida del siguiente código? 
int sumarFila(int (*m)[3], int fila) { 
    return m[fila][0]+m[fila][1]+m[fila][2]; 
} 
// Dentro de main(): 
int m[2][3]={{1,2,3},{4,5,6}}; 
cout << sumarFila(m,1); 
//A) 15     B) 9     C) 21     D) 6   Respuesta: A