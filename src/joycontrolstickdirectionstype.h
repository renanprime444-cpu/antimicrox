/* antimicrox Gamepad to KB+M event mapper
 * Copyright (C) 2015 Travis Nickles <nickles.travis@gmail.com>
 * Copyright (C) 2020 Jagoda Górska <juliagoda.pl@protonmail>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef JOYCONTROLSTICKDIRECTIONSTYPE_H
#define JOYCONTROLSTICKDIRECTIONSTYPE_H

class JoyStickDirectionsType
{
  public:
    enum JoyStickDirections
    {
        StickCentered = 0,
        StickUp = 1,
        StickRight = 3,
        StickDown = 5,
        StickLeft = 7,
        StickRightUp = 2,
        StickRightDown = 4,
        StickLeftUp = 8,
        StickLeftDown = 6,

        // 8 direcoes extras, usadas so no modo "Sixteen Way" (16 direcoes).
        // Ficam entre as 8 direcoes originais (22,5 graus de diferenca).
        StickNNE = 9,  // entre Cima e Cima+Direita
        StickENE = 10, // entre Cima+Direita e Direita
        StickESE = 11, // entre Direita e Baixo+Direita
        StickSSE = 12, // entre Baixo+Direita e Baixo
        StickSSW = 13, // entre Baixo e Baixo+Esquerda
        StickWSW = 14, // entre Baixo+Esquerda e Esquerda
        StickWNW = 15, // entre Esquerda e Cima+Esquerda
        StickNNW = 16  // entre Cima+Esquerda e Cima
    };
};

#endif // JOYCONTROLSTICKDIRECTIONSTYPE_H
