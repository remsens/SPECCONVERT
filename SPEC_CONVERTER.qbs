import qbs

Project {
    Product{
        type: "application" // To suppress bundle generation on Mac
        consoleApplication: false
        files: [
            "main.cpp",
            "qspecconverter.cpp",
            "qspecconverter.h",
        ]
        Depends {name:"cpp"}
        Depends {name:"Qt.core"}
        Depends {name:"Qt.quick"}
        Depends {name: "Qt.qml"}
        destinationDirectory: qbs.buildVariant == "release" ? sourceDirectory + "/bin/release": sourceDirectory + "/bin/debug"

        Group {     // Properties for the produced executable
            fileTagsFilter: product.type
            qbs.install: true
        }
    }


}

