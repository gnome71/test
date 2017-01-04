#include <QTextStream>

int main(int argc, char **argv) {
	QVector<int> a; // Qt object

	for (int i = 0; i<10; i++) {
		a.append(i);
	}

	for (int i : a)
		QTextStream(stdout) << "Counter: " << i;

	return 0;
}
