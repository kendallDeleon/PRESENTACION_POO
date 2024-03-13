#include <iostream>
#include <string>

class Factura {
private:
    std::string numero_factura;
    std::string cliente;
    std::string fecha;
    double total;

public:
    // Constructor
    Factura(const std::string& num_factura, const std::string& cliente_nombre, const std::string& fecha_emision, double total_factura)
        : numero_factura(num_factura), cliente(cliente_nombre), fecha(fecha_emision), total(total_factura) {}

    // Método para agregar un producto a la factura
    void agregarProducto(const std::string& producto, int cantidad, double precio_unitario) {
        // Implementa la lógica para almacenar los detalles del producto
        // Puedes usar vectores, listas o cualquier otra estructura de datos
    }

    // Método para calcular el total de la factura
    double calcularTotal() {
        // Implementa la lógica para sumar los precios de los productos
        // y devuelve el total
        return total;
    }

    // Método para mostrar los detalles de la factura
    void mostrarFactura() {
        std::cout << "Factura #" << numero_factura << std::endl;
        std::cout << "Cliente: " << cliente << std::endl;
        std::cout << "Fecha: " << fecha << std::endl;
        std::cout << "Total: $" << total << std::endl;
    }
};

int main() {
    Factura miFactura("F2024001", "Empresa XYZ", "2024-03-11", 1500.75);
    miFactura.agregarProducto("Producto A", 3, 250.25);
    miFactura.agregarProducto("Producto B", 2, 200.50);

    double totalFactura = miFactura.calcularTotal();
    miFactura.mostrarFactura();

    return 0;
}
