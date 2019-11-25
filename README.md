# Proyecto_Tuberias
Primera Tarea Programada - Programacion 2
Resumen del problema
 Se necesita la creación de un programa que tome un conjunto de tuberías y que analice si estas no tienen algún tipo de fuga a la hora de intentar crear un flujo entre estas tuberías, al analizar si existe un tipo de fuga es necesario saber en que posiciones se encuentran estas y hacia cual dirección apuntan estas fugas. Después de esto se debe hacer una función la cual resuelva un nivel que se presente para que estas fugas ya no estén y esto se tiene que realizar mediante la rotación de piezas, no se pueden cambiar de posición o eliminar, solo rotar para intentar generar las conexiones.
Crear las tuberías
  Para la creación de las tuberías en la resolución de este ejercicio primero se comienza por buscar características que compartan todas estas para poder representarlas en código, estas tuberías tienen 1 característica primordial y es que tienen conexiones a 4 lados (norte, sur, este, oeste). Ya con esta característica analizada es cuestión de crear una función que se encargue de asignar estas conexiones dependiendo de un código que se leen en la entrada. 
 Ya con estos códigos leídos y pasados por la función la cual asigna que tipo de tubería es crear un espacio (matriz) en el cual todas estas tuberías van a ser asignadas para después poder hacer la revisión de si estas contienen fugas y resolver.
Revisar si existen fugas
 Para revisar si existen fugas entre las conexiones de las tuberías primero hay que tener la matriz con todas las tuberías listas, ya con esto hecho para revisar las fugas hay que dividirlas en diferentes casos:
•	Casos esquinas:
En el caso de que se este revisando una esquina hay que saber en cual esquina se está, ya que por ejemplo si se encontrara en la esquina superior izquierda se sabe que solo se tienen que revisar las partes a la derecha y hacia abajo ya que se sabe que no tienen que haber conexiones a menos de que se encuentre una entrada o una salida. 

•	Casos bordes:
En el caso de que se encuentre en el borde también se tienen que hacer especificaciones ya que no tienen conexiones hacia un lado dependiendo de que borde se esté hablando, por ejemplo, el borde superior no puede tener conexión hacia arriba. Estos casos se revisan aparte de las esquinas.
•	Resto de casos:
En el resto de los casos se revisan las cuatro posiciones alrededor ya que estos si pueden tener conexiones a los cuatro lados.

El revisar estas conexiones consiste por ejemplo en que, si una pieza cuenta con una conexión a la izquierda, la pieza que este a la izquierda de las que se esta revisando tiene que tener una conexión a la derecha. Si esto no sucede significa que en ese punto hay una fuga.

Resolver un nivel
 Para la resolución de un nivel hay que tener claro que la solución tiene que ser mediante la rotación de piezas solamente, a la hora de revisar donde se encuentran las fugas estas se guardan, para que cuando se tenga que resolver solo se hagan los cambios en las posiciones donde se encuentran las fugas, hay que tomar en cuenta también que en el caso de que se realicen 4 rotaciones y esta no quede conectada significa que tiene que haber un cambio en las tuberías adyacentes o que en definitiva la tubería no tiene solución.
