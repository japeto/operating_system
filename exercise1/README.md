
# Semaphores as a tool to synchronize independent processes.
Processes normally have no shared data (except for semaphores used for synchronization
Open the file [S, s] and nchro [.java, .c] To understand this program, 
you will also need to understand the file [S, s] emaphore [.java, .c].
In this program, a parent process creates 2 child processes A and B, 
and awaits their completion. Each secondary process performs 5 iterations. 
In each iteration, it just displays its name and the current iteration
number, and sleeps for a random time (so the output is easy to visualize!).
Compile and run the program.

- Could you predict the exit of the program before execution? Why? 
Adjusting the duration of rest of a process (or both processes) to
obtain a different result.
- Could you predict this output? Why?


# Semaphores as a tool for mutual exclusion between processes that
include memory.
To become familiar with the [A, a] ccount [.java, .c] files to
understand this part of the lab, you will also need to understand the
semaphores and shared memory in the [S, s] emaphore [.java, .c] and 
[ S, s] memoria_hared [.java, .c]. In this set of part 2 activities, 
a parent process creates a shared memory segment, appends the segment
into its address space, and writes 100,000 to a variable in shared 
memory before creating 2 child processes A and B. After that, the 
parent waits for the termination of the children and destroys the 
shared memory segment. Each secondary process performs 5 iterations.
Each iteration process A adds 200 to the shared variable, and process
B adds 300 to the shared variable. To help the race conditions 
appear, both processes sleep for a random period of time between 
the time they read the shared variable and the time they write 
the shared variable after modification.
Compile and run the program.
- Could you predict the exit of the program before execution? Why? 
Adjusting the duration of rest of a process (or both processes) to 
obtain a different result.
- Could you predict this output? Why?

- We want to add a new process (name it C), which behaves the same way
as processes A and B, except that it increases the shared variable only
by 90. How many semaphores do you need for assignments so that no 
modification of the shared variable is lost? Modify the program to make 
the parent create process C use semaphores to modify so that no 
modification of the shared variable is lost.


# Semáforos como herramienta para sincronizar procesos independientes.
Los procesos normalmente no tienen datos compartidos 
(excepto los semáforos utilizados para la sincronización). 
Abra el archivo [S,s]ynchro[.java, .c] Para comprender este programa, 
también necesitará entender el archivo [S,s]emaphore[.java, .c]. 
En este programa, un proceso padre crea 2 procesos hijos A y B, y espera 
su finalización. Cada proceso secundario realiza 5 iteraciones. 
En cada iteración, sólo muestra su nombre y el número de iteración 
actual, y duerme durante un tiempo aleatorio (¡para que la salida sea fácil de visualizar!). 
Compilar y ejecutar el programa. 

- ¿Podría predecir la salida del programa antes de la ejecución? 
¿Por qué?  Ajuste la duración de reposo de un proceso (o ambos procesos) 
para obtener un resultado diferente.
- ¿Podrías predecir esta salida? ¿Por qué? 


# Semáforos como herramienta de exclusión mutua entre procesos que 
comparten memoria.
Familiaricese con los archivos [A,a]ccount [.java, .c] para entender 
esta parte del laboratorio, también necesitará entender los semáforos 
y memoria compartida en los archivos [S,s] semaphore[.java, .c] y  [S,s] shared_memory[.java, .c]. 
En este conjunto de actividades de la parte no.2, un proceso padre crea un segmento de memoria compartida,
 adjunta el segmento en su espacio de direcciones y escribe 100000 en una variable en 
 la memoria compartida antes de crear 2 procesos hijos A y B. Después de eso, el padre 
 espera la terminación de los hijos y destruye el segmento de memoria compartida. Cada proceso 
 secundario realiza 5 iteraciones. Cada proceso de iteración A agrega 200 a la variable compartida, y el proceso B agrega 300 a la variable compartida. Para ayudar a que aparezcan las condiciones de la carrera, ambos procesos duermen durante un período de tiempo aleatorio entre el momento en que leen la variable compartida y el momento en que escriben la variable compartida después de la modificación.
Compilar y ejecutar el programa. 
- ¿Podrías predecir la salida del programa antes de la ejecución? 
¿Por qué? Ajuste la duración de reposo de un proceso (o ambos procesos)
 para obtener un resultado diferente. 
- ¿Podrías predecir esta salida? ¿Por qué?  

- Queremos agregar un nuevo proceso (asígnele el nombre C), que se comporta de la misma manera que los procesos A y B, excepto que incrementa la variable compartida solo en 90.
¿Cuántos semáforos necesita para asegurarse de que no se pierda ninguna modificación de la variable compartida? Modifique el programa para hacer que el padre cree el proceso C y use semáforos para asegurarse de que no se pierda ninguna modificación de la variable compartida.
