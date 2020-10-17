[@bs.module "antd"] [@react.component]
external make:
  (
    ~defaultValue: 'a=?,
    ~defaultPickerValue: 'a=?,
    ~format: string=?,
    ~bordered: bool=?
  ) =>
  React.element =
  "DatePicker";
