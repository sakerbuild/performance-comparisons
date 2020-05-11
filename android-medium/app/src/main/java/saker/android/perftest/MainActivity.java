package saker.android.perftest;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		Runnable run = () -> {
			//The text is set programmatically just for the sake of it. yay! lambdas!
			((TextView) findViewById(R.id.textView_main)).setText("Choose an activity.");
		};
		run.run();
	}

	public void showActivity1(View v) {
		Intent intent = new Intent(this, TestActivity1.class);
		startActivity(intent);
	}

	public void showActivity2(View v) {
		Intent intent = new Intent(this, TestActivity2.class);
		startActivity(intent);
	}

	public void showActivity3(View v) {
		Intent intent = new Intent(this, TestActivity3.class);
		startActivity(intent);
	}

	public void showActivity4(View v) {
		Intent intent = new Intent(this, TestActivity4.class);
		startActivity(intent);
	}

	public void showActivity5(View v) {
		Intent intent = new Intent(this, TestActivity5.class);
		startActivity(intent);
	}

	public void showActivity6(View v) {
		Intent intent = new Intent(this, TestActivity6.class);
		startActivity(intent);
	}

	public void showActivity7(View v) {
		Intent intent = new Intent(this, TestActivity7.class);
		startActivity(intent);
	}

	public void showActivity8(View v) {
		Intent intent = new Intent(this, TestActivity8.class);
		startActivity(intent);
	}

	public void showActivity9(View v) {
		Intent intent = new Intent(this, TestActivity9.class);
		startActivity(intent);
	}

	public void showActivity10(View v) {
		Intent intent = new Intent(this, TestActivity10.class);
		startActivity(intent);
	}
}
