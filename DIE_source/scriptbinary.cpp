#include "scriptbinary.h"

scriptBinary::scriptBinary(QObject *parent) :
    scriptGeneric(parent)
{
}

void scriptBinary::setData(Binary *binary)
{
    this->binary=binary;
}
//bool scriptBinary::isPlainText()
//{
//    return binary->isPlainText();
//}

bool scriptBinary::compare(QString sSignature,unsigned int nOffset)
{
    return binary->compare(sSignature,nOffset);
}

//bool scriptBinary::compareHeader(QString sSignature)
//{
//    return binary->compareHeader(sSignature);
//}

bool scriptBinary::compareEP(QString sSignature,unsigned int nOffset)
{
    return binary->compareEP(sSignature,nOffset);
}

//bool scriptBinary::compareEPn(QString sSignature,unsigned int nOffset)
//{
//    return compare(sSignature,nOffset);
//}
//void scriptBinary::_log(QString sString)
//{
//    emit appendError(sString);
//}

QString scriptBinary::getString(unsigned int nOffset, unsigned int nSize)
{
    return binary->getString(nOffset,nSize);
}

unsigned int scriptBinary::readDword(unsigned int nOffset)
{
    return binary->readDword(nOffset);
}

unsigned short scriptBinary::readWord(unsigned int nOffset)
{
    return binary->readWord(nOffset);
}

unsigned char scriptBinary::readByte(unsigned int nOffset)
{
    return binary->readByte(nOffset);
}

unsigned int scriptBinary::getSize()
{
    return binary->size();
}

QString scriptBinary::getFileDirectory()
{
    return binary->getFileDirectory();
}

QString scriptBinary::getFileBaseName()
{
    return binary->getFileBaseName();
}

QString scriptBinary::getFileSuffix()
{
    return binary->getFileSuffix();
}

QString scriptBinary::getFileCompleteSuffix()
{
    return binary->getFileCompleteSuffix();
}

int scriptBinary::findByte(unsigned int nOffset, unsigned int nSize, unsigned char cValue)
{
    return binary->findByte(nOffset,nSize,cValue);
}

int scriptBinary::findWord(unsigned int nOffset, unsigned int nSize, unsigned short sValue)
{
    return binary->findWord(nOffset,nSize,sValue);
}

int scriptBinary::findDword(unsigned int nOffset, unsigned int nSize, unsigned int nValue)
{
    return binary->findDword(nOffset,nSize,nValue);
}

int scriptBinary::findString(unsigned int nOffset, unsigned int nSize, QString sValue)
{
    return binary->findString(nOffset,nSize,sValue);
}

int scriptBinary::findSignature(unsigned int nOffset, unsigned int nSize, QString sSignature)
{
    return binary->findSignature(nOffset,nSize,sSignature);
}

bool scriptBinary::isSignaturePresent(unsigned int nOffset, unsigned int nSize, QString sSignature)
{
    return binary->isSignaturePresent(nOffset,nSize,sSignature);
}

float scriptBinary::calculateEntropy(unsigned int nOffset, unsigned int nSize)
{
    return binary->calculateEntropy(nOffset,nSize);
}

QString scriptBinary::getSignature(unsigned int nOffset, unsigned int nSize)
{
    return binary->getSignature(nOffset,nSize);
}

QString scriptBinary::calculateMD5(unsigned int nOffset, unsigned int nSize)
{
    return binary->calculateMD5(nOffset,nSize);
}
