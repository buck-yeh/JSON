# JSON
`std::variant<>`-aliased JSON object with support functions:
- Encoding: `json::dump()`, **operator <<**
- Decoding: `json::parse()`, `json::parse_int()`, `json::parse_float()`
- Non-mutating getters: `json::subvalue()`, **operator /**
