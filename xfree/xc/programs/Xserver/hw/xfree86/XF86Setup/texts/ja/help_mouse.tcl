# $XFree86: xc/programs/Xserver/hw/xfree86/XF86Setup/texts/ja/help_mouse.tcl,v 1.2 1998/04/05 15:30:32 robin Exp $
#
if !$pc98 {
    set message "\
	    (注：PageDown / Up キーによって、スクロールします)\n\
	    始めに、p を押してマウスの種類を選んで下さい。その後、必要なら\n\
	    ばマウスのつながっているデバイス名を変更して下さい。また、ボーレ\n\
	    ートを設定してもいいでしょう。なお、選択をしている間、マウスを触\n\
	    らないでください。正しく設定できたら、a を押して設定を実際に行な\n\
	    います。その後、マウスを動かして、動くか確かめて下さい。動かなけ\n\
	    れば、設定をもう一度やり直して下さい。\n\n\
	    マウスが動いたら、マウスのボタンを押して正しく動いているか確か\n\
	    めて下さい。もし、3ボタンマウスを使っていて、真中のボタンが動か\n\
	    ないなら、ChordMiddle や Emulate3Buttons を試してみて下さい。\n\n\
	    注：Logitech という種類は、古いロジテックのマウス用です。\n\
	    現在のものは、Microsoft か MouseMan という種類を選ん\n\
	    で下さい。\n\n\
	    なお、Emulate3Buttons を選ぶと、マウスの左右ボタンを同時に押す\n\
	    ことで中央のボタンが押されたことになります。3-button timeout を\n\
	    適当に変更して、使いやすいようにして下さい。\n\n\
	    \tキー\t\t動作\n\
	    ------------------------------------------------------\n\
	    \ta\t-\t設定の変更を実際に行なう\n\
	    \tb\t-\tボーレートを変更する\n\
	    \tc\t-\tChord Middle ボタンを押す／離す\n\
	    \td\t-\tClearDTR ボタンを押す／離す\n\
	    \te\t-\tEmulate3button ボタンを押す／離す\n\
	    \tl\t-\tマウスの感度を変更する\n\
	    \tn\t-\tマウスのデバイス名を設定する\n\
	    \tp\t-\tマウスの種類を選ぶ\n\
	    \tr\t-\tClearRTS ボタンを押す／離す\n\
	    \ts\t-\tサンプルレートを増やす\n\
	    \tt\t-\t3ボタンエミュレーションの閾値を増やす\n\
	    \t3\t-\tボタン数を３個にする\n\
	    \t4\t-\tボタン数を４個にする\n\
	    \t5\t-\tボタン数を５個にする\n\
	    ------------------------------------------------------\n\
	    TAB や SHIFT-TAB を使うことでボタンを選ぶことができ、そこで\n\
	    Enter を押すことでボタンを押すことができます。\n\n\
	    より詳しい説明は、ドキュメントファイルを読んで下さい。\n\n"
} else {
    set message "\
	    (注：ROLL UP/DOWN キーによって、スクロールします)\n\
	    もしも、９８標準マウス（バスマウス）を使っているなら、マウスを\n\
	    動かしてみて下さい。もし動かなければ、マウスの刺さっている\n\
	    デバイスを選択して、<設定実行> のボタンを押してみて下さい。\n\
	    それでも動かなければ、デバイスがカーネルに認識されているか、\n\
	    確認して下さい。\n\n\
	    そうでない場合、始めに、p を押してマウスの種類を選んで下さい。\n\
	    その後、必要ならばマウスのつながっているデバイス名を変更して\n\
	    下さい。また、ボーレートを設定してもいいでしょう。なお、選択を\n\
	    している間、マウスを触らないでください。正しく設定できたら、\n\
	    a を押して設定を実際に行ないます。その後、マウスを動かして、\n\
	    動くか確かめて下さい。動かなければ、設定をもう一度やり直して\n\
	    下さい。\n\n\
	    マウスが動いたら、マウスのボタンを押して正しく動いているか確か\n\
	    めて下さい。もし、3ボタンマウスを使っていて、真中のボタンが動か\n\
	    ないなら、ChordMiddle や Emulate3Buttons を試してみて下さい。\n\n\
	    なお、Emulate3Buttons を選ぶと、マウスの左右ボタンを同時に押す\n\
	    ことで中央のボタンが押されたことになります。3-button timeout を\n\
	    適当に変更して、使いやすいようにして下さい。\n\
	    \tキー\t\t動作\n\
	    ------------------------------------------------------\n\
	    \ta\t-\t設定の変更を実際に行なう\n\
	    \tb\t-\tボーレートを変更する\n\
	    \tc\t-\tChord Middle ボタンを押す／離す\n\
	    \td\t-\tClearDTR ボタンを押す／離す\n\
	    \te\t-\tEmulate3button ボタンを押す／離す\n\
	    \tl\t-\tマウスの感度を変更する\n\
	    \tn\t-\tマウスのデバイス名を設定する\n\
	    \tp\t-\tマウスの種類を選ぶ\n\
	    \tr\t-\tClearRTS ボタンを押す／離す\n\
	    \ts\t-\tサンプルレートを増やす\n\
	    \tt\t-\t3ボタンエミュレーションの閾値を増やす\n\
	    \t3\t-\tボタン数を３個にする\n\
	    \t4\t-\tボタン数を４個にする\n\
	    \t5\t-\tボタン数を５個にする\n\
	    ------------------------------------------------------\n\
	    TAB や SHIFT-TAB を使うことでボタンを選ぶことができ、そこで\n\
	    リターンキーを押すことでボタンを押すことができます。\n\n\
	    より詳しい説明は、ドキュメントファイルを読んで下さい。\n\n"
}
