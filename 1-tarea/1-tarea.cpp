

#include <iostream>

int main()
{

    
    //opciones del usuario
    int opcionElegida = 0;
    int opcionElegidaJuego = 0;
    int opcionElegidaConsola = 0;
    int contador = 1;
    //Consolas
    std::string ConsolaUno = "Nintendo Switch 2";
    std::string ConsolaDos = "PS5";
    std::string ConsolaTres = "XBOX Series X";
    //Juegos Nintendo
    std::string juegoUnoNintendo = "Mario";
    std::string juegoDosNintendo = "Pokemon";
    std::string juegoTresNintendo = "Zelda";
    //Juegos PlayStation
    std::string juegoUnoPlayStation = "The Last Of Us";
    std::string juegoDosPlayStation = "God Of War";
    std::string juegoTresPlayStation = "Spiderman";
    //Juegos XBOX
    std::string juegoUnoXBOX = "Halo";
    std::string juegoDosXBOX = "Forza Horizon";
    std::string juegoTresXBOX = "Doom Eternal";


    std::cout << "Bienvenido al menu de videojuegos. Elige tu consola favorita:" << "\n";
    do
    {
        do
        {
            std::cout << "1) " << ConsolaUno << "\n" << "2) " << ConsolaDos << "\n" << "3) " << ConsolaTres << "\n" << "4) Salir" << "\n";

            std::cin >> opcionElegidaConsola;

            switch (opcionElegidaConsola) {

            case 1:

                std::cout << "Cual es tu juego favorito?" << "\n";
                do
                {
                    std::cout << "1) " << juegoUnoNintendo << "\n" << "2) " << juegoDosNintendo << "\n" << "3) " << juegoTresNintendo << "\n" << "4) Atras" << "\n";
                    std::cin >> opcionElegidaJuego;
                    switch (opcionElegidaJuego) {
                    case 1:
                        std::cout << "Mario es un increible juego de plataformas y super divertido!" << "\n";
                        
                        opcionElegidaJuego = opcionElegidaJuego = 0;
                        if (opcionElegidaJuego == 0)
                        {
                            std::cout << "Cual es tu juego favorito?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 1;
                        }
                        break;
                    case 2:
                        std::cout << "Pokemon en sus primeras generaciones era un excelente JRPG donde tenias batallas super Epicas!";
                        opcionElegidaJuego = opcionElegidaJuego = 0;
                        if (opcionElegidaJuego == 0)
                        {
                            std::cout << "Cual es tu juego favorito?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 1;
                        }
                        break;
                    case 3:
                        std::cout << "Zelda el mejor juego de mundo abierto y donde sus historias y personajes son geniales!";
                        opcionElegidaJuego = opcionElegidaJuego = 0;
                        if (opcionElegidaJuego == 0)
                        {
                            std::cout << "Cual es tu juego favorito?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 1;
                        }
                        break;
                    case 4:
                        
                        if (opcionElegidaJuego == 4)
                        {
                            std::cout << "Cual es tu consola favorita?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 0;
                        }
                        break;
                    default:
                        std::cout << "Esa no es una opcion valida. intentelo denuevo: " << "\n";
                        opcionElegidaJuego = opcionElegidaJuego = 0;
                        if (opcionElegidaJuego == 0)
                        {
                            std::cout << "Cual es tu juego favorito?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 1;
                        }
                        break;
                    }
                }while (opcionElegidaJuego == 0 );
                break;

                //Aqui termina el case de Nintendo

            case 2:
                std::cout << "Cual es tu juego favorito?" << "\n";
                do
                {
                    std::cout << "1) " << juegoUnoPlayStation << "\n" << "2) " << juegoDosPlayStation << "\n" << "3) " << juegoTresPlayStation << "\n" << "4) Atras" << "\n";
                    std::cin >> opcionElegidaJuego, "\n";
                    switch (opcionElegidaJuego) {
                    case 1:
                        std::cout << "The Last Of Us tiene una historia genial....Creo jaja" << "\n";
                        opcionElegidaJuego = opcionElegidaJuego = 0;
                        if (opcionElegidaJuego == 0)
                        {
                            std::cout << "Cual es tu juego favorito?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 2;
                        }
                        break;
                    case 2:
                        std::cout << "God Of War tiene unas batallas super divertidas" << "\n";
                        opcionElegidaJuego = opcionElegidaJuego = 0;
                        if (opcionElegidaJuego == 0)
                        {
                            std::cout << "Cual es tu juego favorito?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 2;
                        }
                        break;
                    case 3:
                        std::cout << "Spiderman tiene una movilidad muy divertida en los videojuegos" << "\n";
                        opcionElegidaJuego = opcionElegidaJuego = 0;
                        if (opcionElegidaJuego == 0)
                        {
                            std::cout << "Cual es tu juego favorito?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 2;
                        }
                        break;
                    case 4:
                        if (opcionElegidaJuego == 4)
                        {
                            std::cout << "Cual es tu consola favorita?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 0;
                        }
                        break;
                    default:
                        std::cout << "Esa no es una opcion valida. intentelo denuevo: " << "\n";
                        opcionElegidaJuego = opcionElegidaJuego = 0;
                        if (opcionElegidaJuego == 0)
                        {
                            std::cout << "Cual es tu juego favorito?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 2;
                        }
                        break;
                    }
                } while (opcionElegidaJuego == 0);
                
                break;
                //Aqui termina el case de PlayStation

            case 3:
                std::cout << "Cual es tu juego favorito?" << "\n";

                do
                {
                    std::cout << "1) " << juegoUnoXBOX << "\n" << "2) " << juegoDosXBOX << "\n" << "3) " << juegoTresXBOX << "\n" << "4) Atras" << "\n";
                    std::cin >> opcionElegidaJuego, "\n";
                    switch (opcionElegidaJuego) {
                    case 1:
                        std::cout << "Halo el shooter de Xbox" << "\n";
                        opcionElegidaJuego = opcionElegidaJuego = 0;
                        if (opcionElegidaJuego == 0)
                        {
                            std::cout << "Cual es tu juego favorito?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 3;
                        }
                        break;
                    case 2:
                        std::cout << "Forza Horizon el mejor juego de conduccion a dia de hoy" << "\n";
                        opcionElegidaJuego = opcionElegidaJuego = 0;
                        if (opcionElegidaJuego == 0)
                        {
                            std::cout << "Cual es tu juego favorito?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 3;
                        }
                        break;
                    case 3:
                        std::cout << "Doom Eternal tiene batallas con mucha adrenalina" << "\n";
                        opcionElegidaJuego = opcionElegidaJuego = 0;
                        if (opcionElegidaJuego == 0)
                        {
                            std::cout << "Cual es tu juego favorito?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 3;
                        }
                        break;
                    case 4:
                        if (opcionElegidaJuego == 4)
                        {
                            std::cout << "Cual es tu consola favorita?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 0;
                        }
                        break;
                    default:
                        std::cout << "Esa no es una opcion valida. intentelo denuevo: " << "\n";
                        opcionElegidaJuego = opcionElegidaJuego = 0;
                        if (opcionElegidaJuego == 0)
                        {
                            std::cout << "Cual es tu juego favorito?" << "\n";
                            opcionElegidaConsola = opcionElegidaConsola = 3;
                        }
                        break;
                    }
                } while (opcionElegidaJuego == 0);
                    break;
                    //Aqui termina el case de XBOX
                

            case 4:
                std::cout << "Vuelve cuando quieras!";
                return opcionElegida++;
                break;
                //Aqui termina el case 4

            default:
                std::cout << "Opcion no valida, intenta denuevo" << "\n";
                return contador = 0;
                break;
            }
        }while (opcionElegidaConsola == 0 || opcionElegidaConsola < 0 );
        
    }while (contador > opcionElegida && contador != opcionElegida);
    

    return 0;
}