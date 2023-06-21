auto p1 = std::make_unique<int>(42); // `std::make_unique` é C++14.

//std::unique_ptr<int> p2 = p1; // Errado: não é possível copiar um `std::unique_ptr`.

std::unique_ptr<int> p3 = std::move(p1); // Ok: posse do recurso foi transferida.
-
