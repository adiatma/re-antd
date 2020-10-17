[@bs.module "antd"] [@react.component]
external make:
  (
    ~name: string=?,
    ~action: string=?,
    ~onChange: ReactEvent.Mouse.t => unit=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Upload";
