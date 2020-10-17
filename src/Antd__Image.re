[@bs.module "antd"] [@react.component]
external make:
  (~width: int=?, ~height: int=?, ~src: string=?, ~fallback: string=?) =>
  React.element =
  "Image";
