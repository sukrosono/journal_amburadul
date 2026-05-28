[ USER INPUT ] 
      |
      v
[ EMBEDDING SERVICE (PyTorch/Sentence-Transformers) ]  <-- Turns query into a Vector
      |
      v
[ VECTOR DATABASE (MongoDB/pgvector) ]                 <-- Finds relevant "State" (Docs/History)
      |
      v
[ CONTEXT CONSTRUCTOR ]                                <-- Merges [Docs] + [User Query]
      |
      v
[ LLM ENGINE (Llama.cpp or Ollama API) ]               <-- Generates the final answer
      |
      v
[ USER OUTPUT ]
