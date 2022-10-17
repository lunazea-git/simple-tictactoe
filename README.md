# simple-tictactoe
simple game made in c++

![obraz](https://user-images.githubusercontent.com/112971938/196202968-e0086e0f-7207-476c-b805-1a83ffa857eb.png)

<h1>what does the board look like?</h1>

![obraz](https://user-images.githubusercontent.com/112971938/196203834-5eb7f251-18fa-4179-a110-4764d069faf6.png)

well, if you want to select the first field, write 0, not 1. the same way if you want the last field, do not write 9, but 8, because the range is 0 to 8.

<h1>Who is who?</h1>
so player A will be 2 and player B will be 3 on the board

![obraz](https://user-images.githubusercontent.com/112971938/196201059-111d425b-c64c-4a9d-a3c4-1561d7727462.png)

<h1>how to win?</h1>
you must have the same numbers in one column or row (also counts on the slant)

![obraz](https://user-images.githubusercontent.com/112971938/196201606-b59ce7d8-2156-481e-9e39-127fd1f96f8f.png)

![obraz](https://user-images.githubusercontent.com/112971938/196202244-2e313771-7884-4593-9fd9-3132009e951c.png)

![obraz](https://user-images.githubusercontent.com/112971938/196202432-1dc484e3-43cf-454b-a00d-e00aa1acbc8a.png)

<h1>my fields are winning and I'm still not winning</h1>
right... unfortunately my code does not provide for premature termination of the game so if your fields win you have to fill the rest of the fields to end the game

![obraz](https://user-images.githubusercontent.com/112971938/196199187-6f47c586-5906-44b6-ba8f-dd5205ed8eff.png)

so the condition for ending the game is that there is ONLY ONE vacant field left with a value of 0
<h1>license</h1>
Open source license (GPL3)
