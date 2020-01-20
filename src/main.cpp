#include <iostream>
#include <fstream>
#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"

void saveResult(int score, int size) {
  std::string output = "result.txt";
  std::ofstream writeFile(output.data());
  if (writeFile.is_open()) {
    writeFile << "Score: " << score << std::endl;
    writeFile << "Size: " << size << std::endl;
    writeFile.close();
  }
}

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(kGridWidth, kGridHeight);
  game.Run(controller, renderer, kMsPerFrame);
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  std::cout << "Size: " << game.GetSize() << "\n";

  saveResult(game.GetScore(), game.GetSize());
  return 0;
}