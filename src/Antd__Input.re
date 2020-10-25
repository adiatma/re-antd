type size = [ | `large | `middle | `small];

[@bs.module "antd"] [@react.component]
external make:
  (
    ~_type: string=?,
    ~value: string=?,
    ~onChange: ReactEvent.Form.t=?,
    ~defaultValue: string=?,
    ~placeholder: string=?,
    ~disabled: bool=?,
    ~addonAfter: 'a=?,
    ~addonBefore: 'c=?,
    ~allowClear: bool=?,
    ~bordered: bool=?,
    ~id: string=?,
    ~maxLength: int=?,
    ~prefix: React.element=?,
    ~size: size=?,
    ~suffix: React.element=?,
    ~onPressEnter: ReactEvent.Form.t=?
  ) =>
  React.element =
  "Input";

module Search = {
  [@bs.module "antd"] [@bs.scope "Input"] [@react.component]
  external make:
    (~enterButton: 'a=?, ~loading: bool=?, ~onSearch: ReactEvent.Form.t=?) =>
    React.element =
    "Search";
};
