import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter/src/foundation/key.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:flutter_joystick/flutter_joystick.dart';

class JoyStickView extends StatefulWidget {
  const JoyStickView({Key? key}) : super(key: key);

  @override
  State<JoyStickView> createState() => _JoyStickViewState();
}

class _JoyStickViewState extends State<JoyStickView> {
  @override
  Widget build(BuildContext context) {
    return Column(
      children: [
        Row(
          children: [
            ElevatedButton(
                onPressed: () {},
                child: Text(
                  '↖',
                  style: styleIcons(),
                )),
            ElevatedButton(
                onPressed: () {},
                child: Text(
                  '⬆',
                  style: styleIcons(),
                )),
            ElevatedButton(
                onPressed: () {},
                child: Text(
                  '↗',
                  style: styleIcons(),
                ))
          ],
        ),
        Row(
          children: [
            ElevatedButton(
                onPressed: () {},
                child: Text(
                  '⬅',
                  style: styleIcons(),
                )),
            ElevatedButton(
                onPressed: () {},
                child: Text(
                  '🛑',
                  style: styleIcons(),
                )),
            ElevatedButton(
                onPressed: () {},
                child: Text(
                  '➡',
                  style: styleIcons(),
                ))
          ],
        ),
        Row(
          children: [
            ElevatedButton(
                onPressed: () {},
                child: Text(
                  '↙',
                  style: styleIcons(),
                )),
            ElevatedButton(
                onPressed: () {},
                child: Text(
                  '⬇',
                  style: styleIcons(),
                )),
            ElevatedButton(
                onPressed: () {},
                child: Text(
                  '↘',
                  style: styleIcons(),
                ))
          ],
        )
      ],
    );
  }

  TextStyle styleIcons() =>
      TextStyle(fontSize: 25, fontWeight: FontWeight.bold);
}
