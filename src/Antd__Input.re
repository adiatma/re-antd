[@bs.module "antd"] [@react.component]
external make:
  (
    ~_type: string=?,
    ~value: string=?,
    ~onChange: unit=?,
    ~defaultValue: string=?,
    ~placeholder: string=?,
    ~disabled: bool=?
  ) =>
  React.element =
  "Input";
let makeProps = (~_type="text", ~disabled=false) =>
  makeProps(~_type, ~disabled);
