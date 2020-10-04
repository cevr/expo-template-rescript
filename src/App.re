open ReactNative;

[@react.component]
let make = () =>
  <SafeAreaView style={Tw.make("h-full")}>
    <View style={Tw.make("pt-12 items-center")}>
      <View style={Tw.make("bg-blue-200 px-3 py-1 rounded-full")}>
        <Text style={Tw.make("text-blue-800 font-semibold")}>
          "Hello Tailwind"->React.string
        </Text>
      </View>
    </View>
  </SafeAreaView>;
