import 'package:test/test.dart';
import 'package:two_fer/two_fer.dart';


String twoFer([String name = 'you']){
  if (name == null){
    var result = "One for you, One for me.";
    return result;
  } else {
    var result = "One for $name, one for me.";
    return result;
  }
}

void main(){

print(twoFer());
print(twoFer('Alice'));

}