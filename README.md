# @adiatma/re-antd

ReasonML bindings for [Ant Design](https://ant.design).

# Install

```bash
yarn add @adiatma/re-antd # or
npm install @adiatma/re-antd
```

- Add `@adiatma/re-antd` to `bs-dependencies` in `bsconfig.json`.
- Please install `antd` and `@ant-design/icons`.

# Usage

```reason
open AdiatmaReAntd;
open Antd;

[@react.component]
let make = () => {
  <Steps>
    <Steps.Step title="Step 1" status=`process />
    <Steps.Step title="Step 2" />
  </Steps>
}
```

# Components

- [x] Button
- [x] Col
- [x] Row
- [x] Upload
- [x] Form
- [x] DatePicker
- [x] Icon
- [x] Image
- [x] Input
- [x] Modal
- [x] Steps
- [x] Upload
- [ ] Layout
- [ ] Typography
- [ ] Badge
- [ ] Space
- [ ] Empty
- [ ] Avatar
- [ ] Checkbox
- [ ] Card
- [ ] Navigation
- [ ] [etc](https://ant.design/components/overview/)

For more references check out in [here](https://ant.design/components/overview/).
