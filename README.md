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
open Antd;

[@react.component]
let make = () => {
  <Steps>
    <Steps.Step title="Step 1" />
    <Steps.Step title="Step 2" />
  </Steps>
}
```

For more references check out in [here](https://ant.design/components/overview/).
