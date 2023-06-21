{
  auto s1 = std::make_shared<int>(42);

  {
    // Ok: a cópia significa compartilhamento do mesmo recurso. Contador incrementa.
    std::shared_ptr<int> s2 = s1;
  } // s2 sai de escopo e o contador decrementa.

} // s1 sai de escopo, contador decrementa e descarta o recurso.
