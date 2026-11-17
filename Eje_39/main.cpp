//¿Cuál es la salida del siguiente código?
void cambiar(int* p) { *p += 5; } 
// Dentro de main(): 
int x=7; 
cambiar(&x); 
cout << x; 
//A) 12     B) 7     C) 5     D) Error de compilación   Respuesta: A