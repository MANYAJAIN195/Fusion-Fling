# Fusion-Fling

The main idea of the project is to create a game that guides a number to the best landing spot by selecting columns. Vertical adjacent blocks with same number form a single block whose value is doubled. 

Goal of the game is to add and minimize vertical adjacent blocks of same numbers and keep the grid empty for as long as possible (making doubles will free up more space on the grid) to attain maximum score. 

When the program is executed: 
1. A random power of 2 is generated and user is asked the column number in which he/she wants the number to go to for limited time. 
2. Merging is done according to the convention that vertical adjacent blocks with same number will be merged first till no further match is found. 
3. Merged column will be the one selected by user. 
