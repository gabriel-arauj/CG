#include "mainwindow.h"
#include <QApplication>

#include <vector>


#include "Headers/forma.h"
#include "Headers/esfera.h"
#include "Headers/face.h"
#include "Headers/cone.h"
#include "Headers/matriz.h"
#include "Headers/matrizrotacao.h"
#include "Headers/matrizreflexao.h"
#include "Headers/matrizcisalhamento.h"
#include "Headers/matrizescala.h"
#include "Headers/matriztranslacao.h"
#include "Headers/vertice.h"
#include "Headers/vetor.h"

int main(int argc, char *argv[])
{
    std::vector<Vertice> listaVert;
    std::vector<Forma> listaObj;

    QApplication a(argc, argv);
    MainWindow window;
    window.resize(1000,1000);
    window.setWindowTitle("Computação Gráfica I");
    window.show();


    return a.exec();
}
