
package com.Android1;

import android.app.Activity;
import android.widget.TextView;
import android.os.Bundle;

public class Android1 extends Activity
{
    /** �۾��� ó�� ���� �� ȣ��˴ϴ�. */
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        /* TextView�� ����� �ؽ�Ʈ�� "Hello world"�� ���� */
        TextView  tv = new TextView(this);
        tv.setText("Hello World!");
        setContentView(tv);
    }
}
