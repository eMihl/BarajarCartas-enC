
 - Este programa baraja y reparte las 48 cartas principales de la
   baraja española. 
   El tamaño de las variables y el nombre de las cartas se pueden
   modificar para que el número de cartas total sea diferente, así
   como el número de cartas que se reparten a cada jugador.

 - En el módulo "barajeo.cpp" es donde se encuentra el algoritmo que
   baraja las cartas, utilizando para ello una variable dinámica, que
   al principio contiene toda la baraja, y que va reduciendo su tamaño
   uno a uno hasta quedar en cero cuando todas las cartas están repartidas.
   También se utiliza una serie de punteros.

  - En "main.cpp" se reparten las cartas y se imprime la mesa de juego.