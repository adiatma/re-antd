[@bs.deriving jsConverter]
type shapeVariant = [ | [@bs.as "circle"] `circle | [@bs.as "round"] `round];

[@bs.deriving jsConverter]
type sizeVariant = [
  | [@bs.as "large"] `large
  | [@bs.as "middle"] `middle
  | [@bs.as "small"] `small
];

[@bs.deriving jsConverter]
type appearanceVariant = [
  | [@bs.as "primary"] `primary
  | [@bs.as "ghost"] `ghost
  | [@bs.as "dashed"] `dashed
  | [@bs.as "link"] `link
  | [@bs.as "text"] `text
  | [@bs.as "default"] `default
];

[@bs.module "antd"] [@react.component]
external make:
  (
    ~block: bool=?,
    ~danger: bool=?,
    ~disabled: bool=?,
    ~ghost: bool=?,
    ~href: string=?,
    ~htmlType: string=?,
    ~icon: 'a=?,
    ~loading: bool=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~children: React.element=?,
    ~shape: shapeVariant=?,
    ~size: sizeVariant=?,
    ~target: string=?,
    ~_type: appearanceVariant=?
  ) =>
  React.element =
  "Button";

let makeProps =
    (
      ~block=false,
      ~danger=false,
      ~disabled=false,
      ~ghost=false,
      ~loading=false,
      ~_type=`default,
      ~size=`middle,
    ) =>
  makeProps(~block, ~danger, ~disabled, ~ghost, ~_type, ~loading, ~size);
