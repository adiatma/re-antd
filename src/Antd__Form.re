type componentVariant('a) =
  | Element('a)
  | Boolean(bool);

type emptyObj;

[@bs.deriving jsConverter]
type labelAlignVariant = [ | [@bs.as "left"] `left | [@bs.as "right"] `right];

type labelColRecord = {
  span: int,
  offset: int,
  sm: int,
  md: int,
  xl: int,
};

[@bs.deriving jsConverter]
type layoutVariant = [
  | [@bs.as "horizontal"] `horizontal
  | [@bs.as "vertical"] `vertical
  | [@bs.as "inline"] `inline
];

[@bs.deriving jsConverter]
type sizeVariant = [
  | [@bs.as "small"] `small
  | [@bs.as "middle"] `middle
  | [@bs.as "large"] `large
];

type validatedMessagesRecord = {required: string};

type validatedTriggerVariant =
  | String(string)
  | ArrayString(array(string));

type fn = unit => unit;

[@bs.module "antd"] [@react.component]
external make:
  (
    ~component: componentVariant('a)=?,
    ~colon: bool=?,
    ~fields: array('a)=?,
    ~form: 'a=?,
    ~initialValues: emptyObj=?,
    ~labelAlign: labelAlignVariant=?,
    ~labelCol: labelColRecord=?,
    ~layout: layoutVariant=?,
    ~name: string=?,
    ~preserve: bool=?,
    ~requiredMark: bool=?,
    ~scrollToFirstError: bool=?,
    ~size: sizeVariant=?,
    ~validatedMessages: validatedMessagesRecord=?,
    ~validatedTrigger: validatedTriggerVariant=?,
    ~wrapperCol: emptyObj=?,
    ~onFinish: fn=?,
    ~onFinishFailed: fn=?,
    ~onFieldsChange: fn=?,
    ~onValuesChange: fn=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Form";
let makeProps =
    (
      ~colon=true,
      ~layout=`vertical,
      ~labelAlign=`right,
      ~preserve=true,
      ~requiredMark=true,
      ~scrollToFirstError=false,
    ) =>
  makeProps(
    ~colon,
    ~layout,
    ~labelAlign,
    ~preserve,
    ~requiredMark,
    ~scrollToFirstError,
  );

module Item = {
  [@react.component] [@bs.module "antd"] [@bs.scope "Form"]
  external make:
    (
      ~color: bool=?,
      ~dependencies: 'a=?,
      ~extra: React.element=?,
      ~getValueFromEvent: fn=?,
      ~getValueFromProps: fn=?,
      ~hasFeedback: bool=?,
      ~help: React.element=?,
      ~htmlFor: string=?,
      ~initialValue: string=?,
      ~noStyle: bool=?,
      ~label: 'a=?,
      ~labelAlign: labelAlignVariant=?,
      ~labelCol: labelColRecord=?,
      ~required: bool=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Item";
};
