#include <limits>
#include <pthread.h>


#include "language.h"

language::language(){
    initializeLanguage();
}

void language::initializeLanguage(){
    SetConsoleOutputCP(CP_UTF8);

    setInsertCoordinate     (csEN_insertCoordinate);
    setWrongPosition        (csEN_wrongPosition);
    setGameEndedSpacing     (csEN_gameEndSpacing);
    setGameEnded            (csEN_gameEnded);
    setGameEndedMoralLesson (csEN_gameEndedMoralLesson);
    setGameRulesHeader      (csEN_gameRulesHeader);
    setGameRule1            (csEN_gameRule1);
    setGameRule2            (csEN_gameRule2);
    setGameRule3            (csEN_gameRule3);
    setBetweenPlayer        (csEN_BetweenPlayer);
    setBetweenPieces        (csEN_BetweenPieces);
    setBetweenEnemy         (csEN_BetweenEnemy);
}

std::string language::getInsertCoordinate     (){
    return _insertCoordinate;
}

std::string language::getWrongPosition        (){
    return _wrongPosition;
}

std::string language::getGameEndedSpacing     (){
    return _gameEndedSpacing;
}

std::string language::getGameEnded            (){
    return _gameEnded;
}

std::string language::getGameEndedMoralLesson (){
    return _gameEndedMoralLesson;
}

std::string language::getGameRulesHeader      (){
    return _gameRulesHeader;
}

std::string language::getGameRule1            (){
    return _gameRule1;
}

std::string language::getGameRule2            (){
    return _gameRule2;
}

std::string language::getGameRule3            (){
    return _gameRule3;
}

std::string language::getBetweenPlayer (){
    return _betweenPlayer;
}
std::string language::getBetweenPieces (){
    return _betweenPieces;
}
std::string language::getBetweenEnemy (){
    return _betweenEnemy;
}


void language::setInsertCoordinate (std::string newText){
    _insertCoordinate = newText;
}

void language::setWrongPosition (std::string newText){
    _wrongPosition = newText;
}

void language::setGameEndedSpacing (std::string newText){
    _gameEndedSpacing = newText;
}

void language::setGameEnded (std::string newText){
    _gameEnded = newText;
}

void language::setGameEndedMoralLesson (std::string newText){
    _gameEndedMoralLesson = newText;
}

void language::setGameRulesHeader (std::string newText){
    _gameRulesHeader = newText;
}

void language::setGameRule1 (std::string newText){
    _gameRule1 = newText;
}

void language::setGameRule2 (std::string newText){
    _gameRule2 = newText;
}

void language::setGameRule3 (std::string newText){
    _gameRule3 = newText;
}

void language::setBetweenPlayer (std::string newText){
    _betweenPlayer = newText;
}

void language::setBetweenPieces (std::string newText){
    _betweenPieces = newText;
}

void language::setBetweenEnemy (std::string newText){
    _betweenEnemy = newText;
}
