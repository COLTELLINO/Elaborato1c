# Elaborato1c

Specifiche:
• Scrivere un programma C che dichiari una variabile per ogni possibile combinazione di specificatori e modificatori di tipo visti a lezione
(eccetto il tipo void).
• Inizializzare ogni variabile con un valore appartenente al range di valori
possibili per il tipo con cui è stata dichiarata.
• Per ogni variabile dichiarata, usare la printf() per stampare: il tipo
della variabile, il nome della variabile, il suo valore attuale, il valore
minimo e massimo ammissibile per il tipo della variabile e l’occupazione
di memoria (in byte) di tale tipo.
• Stampare una sola variabile per riga.
Vincoli:
• E’ necessario utilizzare correttamente gli specificatori di formato della
printf() per ogni tipo di dato considerato.
• E’ necessario utilizzare il costrutto sizeof per poter calcolare l’occupazione di memoria dei tipi di dato.
• E’ necessario utilizzare i valori limite per tipo di dato specificati nei file
header limits.h e float.h.
Esempio di stampa per il tipo di dato char:
TYPE: char NAME: c VALUE: x MIN: -128 MAX: 127 BYTE: 1
