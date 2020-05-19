[@raises Yojson.Json_error]
let foo = x => Yojson.Basic.from_string(x);

let bar = (str, json) =>
  switch (Yojson.Basic.Util.(json |> member(str))) {
  | j => j
  | exception (Yojson.Basic.Util.Type_error("a", d)) when d == json => json
  };

let toString = x => Yojson.Basic.Util.to_string(x);

let toInt = x => Yojson.Basic.Util.to_int(x);