#include <QCoreApplication>
#include "InVpn.hpp"

int main(int argc, char *argv[]) {
	QCoreApplication app(argc, argv);

	InVpn vpn;

	return app.exec();
}

