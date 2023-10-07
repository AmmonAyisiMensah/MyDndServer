# MyDndServer
Simulate a D&amp;D game in a web application that can handle user with a character from DndBeyond.

## Introduction 
![ProjectContext](doc/assets/context.svg)

## Notes
With following GET request we can aquire the character details, $char_id is to be replaced with the actual character id from dndbeyond.com
```
https://character-service.dndbeyond.com/character/v5/character/$char_id?includeCustomItems=true
```
