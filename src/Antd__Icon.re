type sizeVariant =
  | String(string)
  | Number(int);

[@bs.module "@ant-design/icons"] [@react.component]
external make:
  (
    ~component: 'a=?,
    ~rorate: int=?,
    ~spin: bool=?,
    ~style: 'a=?,
    ~twoToneColor: string=?
  ) =>
  React.element =
  "Icon";

module UploadOutlined = {
  [@react.component] [@bs.module "@ant-design/icons"]
  external make:
    (~height: sizeVariant=?, ~width: sizeVariant=?) => React.element =
    "UploadOutlined";
};

module InfoCircleOutlined = {
  [@react.component] [@bs.module "@ant-design/icons"]
  external make:
    (~height: sizeVariant=?, ~width: sizeVariant=?) => React.element =
    "InfoCircleOutlined";
};
