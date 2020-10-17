[@bs.deriving jsConverter]
type orientationVariant = [
  | [@bs.as "horizontal"] `horizontal
  | [@bs.as "vertical"] `vertical
];

[@bs.deriving jsConverter]
type typeVariant = [
  | [@bs.as "default"] `default
  | [@bs.as "navigation"] `navigation
];

[@bs.deriving jsConverter]
type statusVariant = [
  | [@bs.as "wait"] `wait
  | [@bs.as "process"] `process
  | [@bs.as "finish"] `finish
  | [@bas.as "error"] `error
];

[@bs.deriving jsConverter]
type sizeVariant = [ | [@bs.as "default"] `default | [@bs.as "small"] `small];

[@bs.module "antd"] [@react.component]
external make:
  (
    ~className: string=?,
    ~_type: typeVariant=?,
    ~current: int=?,
    ~direction: orientationVariant=?,
    ~labelPlacement: orientationVariant=?,
    ~progressDot: bool=?,
    ~size: sizeVariant=?,
    ~status: statusVariant=?,
    ~initial: int=?,
    ~onChange: ReactEvent.Mouse.t => unit=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Steps";

let makeProps =
    (
      ~_type=`default,
      ~current=0,
      ~direction=`horizontal,
      ~labelPlacement=`horizontal,
      ~progressDot=false,
      ~size=`default,
      ~status=`process,
      ~initial=0,
      ~onChange=?,
    ) =>
  makeProps(
    ~_type,
    ~current,
    ~direction,
    ~labelPlacement,
    ~progressDot,
    ~size,
    ~status,
    ~initial,
    ~onChange?,
  );

module Step = {
  [@react.component] [@bs.module "antd"] [@bs.scope "Steps"]
  external make:
    (
      ~title: 'a=?,
      ~description: 'a=?,
      ~status: statusVariant=?,
      ~icon: 'a=?,
      ~subTitle: 'string=?,
      ~disabled: bool=?
    ) =>
    React.element =
    "Step";
  let makeProps = (~status=`wait, ~disabled=false) =>
    makeProps(~status, ~disabled);
};
