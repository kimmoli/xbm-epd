/*
Copyright (c) 2014 kimmoli kimmo.lindholm@gmail.com @likimmo

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#include <QCoreApplication>
#include "converter.h"
#include <QDebug>
#include <QString>
#include <QProcessEnvironment>
#include <QThread>


int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("xbm-epd version " APPVERSION " (C) kimmoli 2014\n\n");
        printf("xbm-epd inputimagefilen.ame\n");
        return 0;
    }

    printf("Writing output to %s\n", qPrintable(QString("%1.xbm").arg(QString(argv[1]).split('.').at(0))));

    Converter* converter = new(Converter);

    converter->convert(QString(argv[1]), QString("%1.xbm").arg(QString(argv[1]).split('.').at(0)));

    delete converter;
    return 1;
}

